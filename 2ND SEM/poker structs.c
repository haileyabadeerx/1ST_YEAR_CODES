#include <stdio.h>

#define NOTHING 0
#define ONE_PAIR 1
#define TWO_PAIRS 2
#define THREE_OF_A_KIND 3
#define STRAIGHT 4
#define FLUSH 5
#define FULL_HOUSE 6
#define FOUR_OF_A_KIND 7
#define STRAIGHT_FLUSH 8

struct Card {
    char suit;
    int value;
};

int scoreHand(struct Card cards[5]) {
    int isFlush = 1;
    int isStraight = 1;
    int hasPair = 0;
    int hasThreeOfAKind = 0;
    int hasFourOfAKind = 0;

    char suit = cards[0].suit;
    int minValue = cards[0].value;

    // Check for flush and straight
    for (int i = 1; i < 5; i++) {
        if (cards[i].suit != suit)
            isFlush = 0;
        if (cards[i].value != minValue + i)
            isStraight = 0;
    }

    // Count card occurrences
    int occurrences[13] = {0};
    for (int i = 0; i < 5; i++)
        occurrences[cards[i].value - 1]++;

    // Check for pairs, three of a kind, and four of a kind
    for (int i = 0; i < 13; i++) {
        if (occurrences[i] == 2)
            hasPair = 1;
        else if (occurrences[i] == 3)
            hasThreeOfAKind = 1;
        else if (occurrences[i] == 4)
            hasFourOfAKind = 1;
    }

    // Determine the category
    if (isFlush && isStraight)
        return STRAIGHT_FLUSH;
    else if (hasFourOfAKind)
        return FOUR_OF_A_KIND;
    else if (hasThreeOfAKind && hasPair)
        return FULL_HOUSE;
    else if (isFlush)
        return FLUSH;
    else if (isStraight)
        return STRAIGHT;
    else if (hasThreeOfAKind)
        return THREE_OF_A_KIND;
    else if (hasPair)
        return TWO_PAIRS;
    else
        return NOTHING;
}

void printCategory(int category) {
    switch (category) {
        case NOTHING:
            printf("Nothing\n");
            break;
        case ONE_PAIR:
            printf("One Pair\n");
            break;
        case TWO_PAIRS:
            printf("Two Pairs\n");
            break;
        case THREE_OF_A_KIND:
            printf("Three of a Kind\n");
            break;
        case STRAIGHT:
            printf("Straight\n");
            break;
        case FLUSH:
            printf("Flush\n");
            break;
        case FULL_HOUSE:
            printf("Full House\n");
            break;
        case FOUR_OF_A_KIND:
            printf("Four of a Kind\n");
            break;
        case STRAIGHT_FLUSH:
            printf("Straight Flush\n");
            break;
        default:
            printf("Invalid category\n");
            break;
    }
}

int main() {
    struct Card playerHand[5];

    printf("Enter the cards in the format [Value][Suit], e.g., AH for Ace of Hearts:\n");
    for (int i = 0; i < 5; i++) {
        char value, suit;
        scanf(" %c%c", &value, &suit);

        playerHand[i].value = value - '0';  // Convert character value to integer
        playerHand[i].suit = suit;
    }

    int handCategory = scoreHand(playerHand);
    printf("Hand category: ");
    printCategory(handCategory);

    return 0;
}








