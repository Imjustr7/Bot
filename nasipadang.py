nilai = 90

match (nilai):
    case n if n >= 90:
        print("Nilai sempurna")
    case n if n >= 80:
        print("kamu dapat B")
    case n if n >= 70:
        print("kamu dapat C")
    case n if n >= 60:
        print("kamu dapat D")
    case n if n < 60:
        print("kamu dapat E")
