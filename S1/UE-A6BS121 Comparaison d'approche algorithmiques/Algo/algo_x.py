from numpy import *
import random
import time


def algo_a(tab: [int], i: int, j: int) -> None:
    """
    prÃ©-condition: 0 <= i, j < len(tab)
    post-condition: ? échanger les 2 valeurs 	
    """
    tmp = tab[i]
    tab[i] = tab[j]
    tab[j] = tmp


def algo_b(tab, g, d, x) -> int:
    """
    prÃ©-condition: 0 <= g < d < len(tab), 0 <= x <= d
    post-condition: ? renvois l'index du pivot 
    """
    algo_a(tab, d, x)
    j = g
    i = g
    while i < d:
        if tab[i] < tab[d]:
            algo_a(tab, i, j)
            j += 1
        i += 1
    algo_a(tab, d, j)
    return j


def algo_c(tab: [int], g: int, d: int) -> None:
    """
    prÃ©-condition: 0 <= g <= d < len(tab)
    post-condition: ? reorganise les élément sur le pivot et fait de meme pour la sous liste
    """
    if g < d:
        p = random.randint(g, d)
        x = algo_b(tab, g, d, p)
        algo_c(tab, g, x-1)
        algo_c(tab, x+1, d)


def algo_main(tab: [int]) -> None:
    """
    prÃ©-condition: 
    post-condition : trie tab par ordre croissant
    """
    algo_c(tab, 0, len(tab)-1)


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
