from enum import Enum
#Mo ta la bai
class chat(Enum):
    BICH = 0
    CO = 1
    RO = 2
    TEP = 3
class rank(Enum):
    A = 1
    J = 11
    Q = 12
    K = 13
class card:
    def __init__(self, chat, hang):
        self.chat = chat
        self.hang = hang
#Tao bo bai
class deck:
    def __init__(self):
        self.cards = []
        for c in chat:
            for r in range(1,14):
                if r in [1,11,12,13]:
                    r = rank(r)
                thebai = card(c,r)
                self.cards.append(thebai)
    def xaobai(self):
        import random
        random.shuffle(self.cards)
    def chiabai(self, player, sobai):
        taybai = []
        for i in player:
            player[i] = []
            for j in range(sobai):
                player[i].append(self.cards.pop())
        return player
decktest = deck()
decktest.xaobai()
players = {'A':[],'B':[],'C':[]}
decktest.chiabai(players, 5)
for i in players:
    print(f"Player {i}:")
    for j in players[i]:
        print(f"  {j.hang.name} of {j.chat.name}")