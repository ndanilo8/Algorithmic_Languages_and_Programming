#include <iostream>

// derived data type structure
struct playing_card
{
    int pips;
    const char* suit;
} deck[52];

void make_deck(void);
void show_card(int n);

int main()
{
    make_deck();
    show_card(3);
    show_card(12);
    show_card(51);

    return 0;
}

void make_deck(void) {
    for (int k = 0; k < 52; k++)
    {
        if (k >= 0 && k < 13) {
            deck[k].pips = k % 13 + 2;
            deck[k].suit = "Hearts";
        }
        if (k >= 13 && k < 26) {
            deck[k].pips = k % 13 + 2;
            deck[k].suit = "Diamonds";
        }
        if (k >= 16 && k < 39) {
            deck[k].pips = k % 13 + 2;
            deck[k].suit = "Spades";
        }
        if (k >= 39 && k < 52) {
            deck[k].pips = k % 13 + 2;
            deck[k].suit = "Clubs";
        }
    }
}

void show_card(int n) {
    switch (deck[n].pips)
    {
    case 11:
        printf("%c of %s \n", "J", deck[n].suit);
        break;
    case 12:
        printf("%c of %s \n", "Q", deck[n].suit);
        break;
    case 13:
        printf("%c of %s \n", "K", deck[n].suit);
        break;
    case 14:
        printf("%c of %s \n", "A", deck[n].suit);
        break;
    default:
        printf("%d of %s \n", deck[n].pips, deck[n].suit);
        break;
    }
}