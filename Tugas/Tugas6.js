let nilai = 90;

switch (true) {
    case (nilai >= 90):
        console.log("Nilai sempurna");
        break;
    case (nilai >= 80):
        console.log("kamu dapat B");
        break;
    case (nilai >= 70):
        console.log("kamu dapat C");
        break;
    if (nilai >= 60) {
        console.log("kamu dapat D");
    }
    default:
        console.log("kamu dapat D");
        break;
}
