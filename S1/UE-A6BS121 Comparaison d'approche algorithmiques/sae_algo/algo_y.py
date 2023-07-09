from numpy import *
import time


def algo_main(tab: [int]) -> None:
    """
    prÃ©-condition : 
    post-condition : trie tab par ordre croissant
    """
    i = 0
    condition = False
    while i < len(tab)-1 and not condition:
        condition = True
        j = 0
        while j < len(tab)-i-1:
            if tab[j] >= tab[j+1]:
                condition = False
                tmp = tab[j]
                tab[j] = tab[j+1]
                tab[j+1] = tmp
            j += 1
        i += 1


def testTri(tab):
    # Test pour savoir si le tableau est trié
    for i in range(1, tab.size):
        v = i - 1
        if tab[v] <= tab[i]:
            v += 1
        else:
            return False
    return True


if __name__ == "__main__":
    size = 10000
    tab = empty(size)
    for i in range(size):
        tab[i] = random.randint(1, 10000)

    print(tab)
    print("Tableau non trié")
    print(testTri(tab))
    algo_main(tab)
    time_s = time.time()
    algo_main(tab)
    time_e = time.time()
    print("Tableau trié")
    print(testTri(tab))
    print(f"Temps d'éxécution: {time_e - time_s}")