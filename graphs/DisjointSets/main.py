import pygame
import random

# Initialize Pygame
pygame.init()

# Set up colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Set up screen
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Diamond Cards Game")

# Set up fonts
font = pygame.font.Font(None, 36)

# Function to draw text on screen
def draw_text(text, font, color, x, y):
    text_surface = font.render(text, True, color)
    text_rect = text_surface.get_rect()
    text_rect.midtop = (x, y)
    screen.blit(text_surface, text_rect)

class Diamonds_Game:    
    def __init__(self):
        deck = Deck()
        self.diamonds = deck.withdraw_all('D')
        random.shuffle(self.diamonds)
        self.players = [Human('S', Hand(deck.withdraw_all('S')))]
        for suit in 'HC':
            player = RandomComputer(suit, Hand(deck.withdraw_all(suit)))
            player.hand.shuffle()    
            self.players.append(player)

        self.elapsed_prizes = []
        self.prize = None
        self.round_over = False
        self.game_over = False
        
        self.init_screen()

    def init_screen(self):
        screen.fill(WHITE)
        draw_text("Diamond Cards Game", font, BLACK, SCREEN_WIDTH // 2, 50)
        pygame.display.flip()
        pygame.time.wait(2000)

    def draw_table(self):
        screen.fill(WHITE)
        draw_text("Diamond Cards Game", font, BLACK, SCREEN_WIDTH // 2, 50)
        draw_text("Current Prize:", font, BLACK, SCREEN_WIDTH // 2, 100)
        if self.prize:
            screen.blit(self.prize.image, (SCREEN_WIDTH // 2 - 50, 150))
        else:
            draw_text("None", font, RED, SCREEN_WIDTH // 2, 150)

        draw_text("Scores:", font, BLACK, 100, 100)
        y_offset = 150
        for player in self.players:
            draw_text(f"{player.suit} Score: {player.score}", font, BLACK, 100, y_offset)
            y_offset += 50

        pygame.display.flip()

    def single_round(self):
        self.prize = self.diamonds.pop(0)
        self.draw_table()
        pygame.time.wait(2000)

        elapsed_bets = {player: player.elapsed_bets for player in self.players}
        for player in self.players:
            player.bet(player.decide(self.prize, self.elapsed_prizes, elapsed_bets))
        winners = self.decide_winning_bet()
        self.distribute_points(winners)
        self.elapsed_prizes.append(self.prize)
        self.draw_table()
        pygame.time.wait(2000)
    
    def decide_winning_bet(self):
        players_bet_amounts = {player: player.current_bet.worth() for player in self.players}
        highest_bet_amount = max(players_bet_amounts.values())
        winners = [player for player in players_bet_amounts if players_bet_amounts[player] == highest_bet_amount]
        return winners
    
    def distribute_points(self, winners):
        points_to_distribute = self.prize.worth() / len(winners)
        for winner in winners:
            winner.score += points_to_distribute

    def main(self):
        self.draw_table()
        while not self.game_over:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    self.game_over = True

            if not self.round_over:
                self.single_round()
                if not self.diamonds:
                    self.round_over = True
            else:
                self.game_over = True

        pygame.quit()

class Card:
    SUITS = 'SHDC'
    RANKS = '__23456789JQKA'
    
    def __init__(self, suit: str, rank: str) -> None:
        self.suit = suit
        self.rank = rank
        self.image = pygame.image.load(f"{rank}.png")
        
    def __eq__(self, other):
        return self.suit == other.suit and self.rank == other.rank
    
    def __repr__(self):
        return self.rank + self.suit
    
    def worth(self):
        return Card.RANKS.index(self.rank)

class Deck:
    def __init__(self):
        self.cards = [Card(suit, rank) for suit in Card.SUITS for rank in Card.RANKS[2:]]
    
    def withdraw(self, card):
        self.cards.remove(card)
        return card
    
    def withdraw_all(self, suit):
        to_withdraw = [card for card in self.cards if card.suit == suit]
        for card in to_withdraw:
            self.withdraw(card)
        return to_withdraw

class Hand:
    def __init__(self, cards):
        self.cards = cards
    
    def withdraw(self, card):
        self.cards.remove(card)
        return card
    
    def shuffle(self):
        random.shuffle(self.cards)
    
class Player:
    def __init__(self, suit, hand):
        self.suit = suit
        self.score = 0
        self.hand = hand
        self.current_bet = None
        self.elapsed_bets = []
        
    def bet(self, card):
        self.current_bet = self.hand.withdraw(card)
        self.elapsed_bets.append(self.current_bet)
        
    def __eq__(self, other):
        return self.suit == other.suit
    
    def __hash__(self):
        return hash(self.suit)
    
    def __repr__(self):
        return f'Suit:{self.suit}, score: {self.score}, elapsed bets:{self.elapsed_bets}'

class Human(Player):
    def decide(self, prize, elapsed_prizes, elapsed_bets):
        print(f'''Player of suit {self.suit}:''')
        print(f'''Your elapsed bets are: {self.elapsed_bets}''')
        print(f'''Just enter the rank you want to bet 23456789TJQKA''')
        choice = input()
        return Card(self.suit, choice)

class RandomComputer(Player):
    def decide(self, prize, elapsed_prizes, elapsed_bets):
        return random.choice(self.hand.cards)

# Run the game
d = Diamonds_Game()
d.main()
