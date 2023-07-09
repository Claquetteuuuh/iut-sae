from numpy import *
import time


def algo_main(tab: [int]):
    """
    prÃ©-condition : 
    post-condition : trie tab par ordre croissant
    """
    i = 0
    while i < tab.size - 1:
        ipp = i
        petit = tab[ipp]
        j = i + 1
        while j < tab.size:
            if tab[j] < petit:
                ipp = j
                petit = tab[ipp]
            j += 1
        tab[ipp] = tab[i]
        tab[i] = petit
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
