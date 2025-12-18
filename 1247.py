import math

while True:
    try:
        d, vf, vg = map(int, input().split())
        tempoF = 12.0 / vf
        tempoG = math.sqrt(d * d + 144) / vg

        if tempoG <= tempoF:
            print("S")
        else:
            print("N")

    except EOFError:
        break