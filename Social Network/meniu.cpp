#include "meniu.h"

void Meniu::runMeniu() {

    User u1(1, "Popescu", "Vlad");
    User u2(2, "Ichim", "Robert");
    User u3(3, "Apetrei", "Ana");
    User u4(4, "Ciobanu", "Vasile");
    User u5(5, "Gruia", "Alex");
    User u6(6, "Ababei", "Crina");
    User u7(7, "Ionescu", "Maria");
    User u8(8, "Szilagyi", "Andrei");
    User u9(9, "Biju", "Costel");
    User u10(10, "Radu", "Matei");
    User u11(11, "Ladaru", "Stefan");
    User u12(12, "Kovacsz", "Emma");
    User u13(13, "Manole", "Andra");
    User u14(14, "Vasilev", "Teo");
    User u15(15, "Pop", "Georgiana");

    Mesaj m1(1, 2, "Salut!");
    Mesaj m2(1, 3, "hei");
    Mesaj m3(2, 3, "Vii azi la film?");
    Mesaj m4(2, 4, "ce mai faci?");
    Mesaj m5(3, 4, "sa-ti zic ceva interesant");
    Mesaj m6(3, 7, "Buna!");
    Mesaj m7(4, 5, "Ai mai fost la restaurant?");
    Mesaj m8(4, 6, "am putina treaba. te sun imd");
    Mesaj m9(5, 12, "hai afara mai tarziu");
    Mesaj m10(5, 13, "ioi, am terminat in sfarsit de adaugat mesajele la sda");
    Mesaj m11(6, 7, "salut");
    Mesaj m12(6, 11, "Heei!");
    Mesaj m13(7, 8, "Am fost la mare saptamana trecuta");
    Mesaj m14(7, 11, "stai putin vin imd");
    Mesaj m15(8, 9, "Te sun eu in cateva minute");
    Mesaj m16(8, 3, "Mi-am cumparat o pisica!");
    Mesaj m17(9, 10, "hola");
    Mesaj m18(9, 14, "Ai treaba acum?");
    Mesaj m19(10, 11, "Iesim mai pe seara");
    Mesaj m20(10, 4, "ii ok daca trec pe la tn mai trz?");
    Mesaj m21(11, 12, "ce faaaci?");
    Mesaj m22(11, 15, "Hai sa-ti arat ceva fain");
    Mesaj m23(12, 5, "Hai");
    Mesaj m24(12, 13, "de ce nu raspunzi...");
    Mesaj m25(12, 2, "te ai trezit?");
    Mesaj m26(13, 14, "hello");
    Mesaj m27(13, 9, "Ma duc la bunici azi");
    Mesaj m28(13, 12, "Scuze, vorbeam la telefon");
    Mesaj m29(13, 5, "Ti-o luat ceva :)))");
    Mesaj m30(14, 15, "Vii diseara la o bere?");
    Mesaj m31(14, 5, "Vii cu masina?");
    Mesaj m32(15, 1, "am pierdut autobuzul...");
    Mesaj m33(15, 7, "M-am culcat la 3 ieri...");
    Mesaj m34(15, 14, "sigur");

    this->retea.addUser(u1);
    this->retea.addUser(u2);
    this->retea.addUser(u3);
    this->retea.addUser(u4);
    this->retea.addUser(u5);
    this->retea.addUser(u6);
    this->retea.addUser(u7);
    this->retea.addUser(u8);
    this->retea.addUser(u9);
    this->retea.addUser(u10);
    this->retea.addUser(u11);
    this->retea.addUser(u12);
    this->retea.addUser(u13);
    this->retea.addUser(u14);
    this->retea.addUser(u15);

    this->retea.addPrietenie(1, 2);
    this->retea.addPrietenie(1, 3);

    this->retea.addPrietenie(2, 3);
    this->retea.addPrietenie(2, 4);

    this->retea.addPrietenie(3, 4);
    this->retea.addPrietenie(3, 7);

    this->retea.addPrietenie(4, 5);
    this->retea.addPrietenie(4, 6);

    this->retea.addPrietenie(5, 12);
    this->retea.addPrietenie(5, 13);

    this->retea.addPrietenie(6, 7);
    this->retea.addPrietenie(6, 11);

    this->retea.addPrietenie(7, 8);
    this->retea.addPrietenie(7, 10);

    this->retea.addPrietenie(8, 9);
    this->retea.addPrietenie(8, 3);

    this->retea.addPrietenie(9, 10);
    this->retea.addPrietenie(9, 14);

    this->retea.addPrietenie(10, 11);
    this->retea.addPrietenie(10, 4);

    this->retea.addPrietenie(11, 12);
    this->retea.addPrietenie(11, 15);

    this->retea.addPrietenie(12, 13);
    this->retea.addPrietenie(12, 2);

    this->retea.addPrietenie(13, 14);
    this->retea.addPrietenie(13, 9);

    this->retea.addPrietenie(14, 15);
    this->retea.addPrietenie(14, 5);

    this->retea.addPrietenie(15, 1);
    this->retea.addPrietenie(15, 7);

    this->retea.addMesaj(m1);
    this->retea.addMesaj(m2);
    this->retea.addMesaj(m3);
    this->retea.addMesaj(m4);
    this->retea.addMesaj(m5);
    this->retea.addMesaj(m6);
    this->retea.addMesaj(m7);
    this->retea.addMesaj(m8);
    this->retea.addMesaj(m9);
    this->retea.addMesaj(m10);
    this->retea.addMesaj(m11);
    this->retea.addMesaj(m12);
    this->retea.addMesaj(m13);
    this->retea.addMesaj(m14);
    this->retea.addMesaj(m15);
    this->retea.addMesaj(m16);
    this->retea.addMesaj(m17);
    this->retea.addMesaj(m18);
    this->retea.addMesaj(m19);
    this->retea.addMesaj(m20);
    this->retea.addMesaj(m21);
    this->retea.addMesaj(m22);
    this->retea.addMesaj(m23);
    this->retea.addMesaj(m24);
    this->retea.addMesaj(m25);
    this->retea.addMesaj(m26);
    this->retea.addMesaj(m27);
    this->retea.addMesaj(m28);
    this->retea.addMesaj(m29);
    this->retea.addMesaj(m30);
    this->retea.addMesaj(m31);
    this->retea.addMesaj(m32);
    this->retea.addMesaj(m33);
    this->retea.addMesaj(m34);

    int optiune;
    do {
        cout << "1. Adauga user" << endl;
        cout << "2. Update user" << endl;
        cout << "3. Sterge user" << endl;
        cout << "4. Afiseaza useri" << endl;
        cout << "==========================" << endl;
        cout << "5. Adauga eveniment" << endl;
        cout << "6. Update eveniment" << endl;
        cout << "7. Sterge eveniment" << endl;
        cout << "8. Afiseaza evenimente" << endl;
        cout << "==========================" << endl;
        cout << "9. Adauga mesaj" << endl;
        cout << "10. Afiseaza mesaje" << endl;
        cout << "==========================" << endl;
        cout << "11. Adauga prietenie" << endl;
        cout << "12. Sterge prietenie" << endl;
        cout << "13. Afiseaza prieteni" << endl;
        cout << "==========================" << endl;
        cout << "0. Exit" << endl;
        cout << "Optiune: ";
        cin >> optiune;
        cout << endl;
        switch (optiune) {
            case 1:
                addUser();
                break;
            case 2:
                updateUser();
                break;
            case 3:
                removeUser();
                break;
            case 4:
                getUsers();
                break;
            case 5:
                addEveniment();
                break;
            case 6:
                updateEveniment();
                break;
            case 7:
                removeEveniment();
                break;
            case 8:
                getEvenimente();
                break;
            case 9:
                addMesaj();
                break;
            case 10:
                getMesaje();
                break;
            case 11:
                addPrietenie();
                break;
            case 12:
                removePrietenie();
                break;
            case 13:
                getPrieteni();
                break;
            case 0:
                break;
            default:
                cout << "Aceasta optiune nu exista\n" << endl;
                break;
        }
    } while (optiune != 0);
}

void Meniu::addUser() {
    int id;
    string nume, prenume;

    cout << "Id: "; cin >> id;
    cin.ignore();
    cout << "Nume: "; getline(cin, nume);
    cout << "Prenume: "; getline(cin, prenume);

    User user(id, nume, prenume);
    retea.addUser(user);
}

void Meniu::updateUser() {
    int id;
    string nume, prenume;

    cout << "Id: "; cin >> id;
    cin.ignore();
    cout << "Nume: "; getline(cin, nume);
    cout << "Prenume: "; getline(cin, prenume);

    User user(id, nume, prenume);
    retea.updateUser(id, user);
}

void Meniu::removeUser() {
    int id;

    cout << "Id: "; cin >> id;

    retea.removeUser(id);
}

void Meniu::getUsers() {
    vector<User> users = retea.getUsers();
    for (User user : users) {
        cout << "UserID: " << user.getId() << " Nume: " << user.getNume() << " Prenume: " << user.getPrenume() << endl;
    }
}

void Meniu::updateEveniment() {
    int id;
    string nume, locatie;

    cout << "Id: "; cin >> id;
    cin.ignore();
    cout << "Nume: "; getline(cin, nume);
    cout << "Locatie: "; getline(cin, locatie);

    Eveniment eveniment(id, nume, locatie);
    retea.updateEveniment(id, eveniment);
}

void Meniu::removeEveniment() {
    int id;

    cout << "Id: "; cin >> id;

    retea.removeEveniment(id);
}

void Meniu::getEvenimente() {
    vector<Eveniment> evenimente = retea.getEvenimente();
    for (Eveniment eveniment : evenimente) {
        cout << "EvenimentID: " << eveniment.getId() << " Nume: " << eveniment.getNume() << " Locatie: " << eveniment.getData() << endl;
    }
}

void Meniu::addMesaj() {
    int id_user1, id_user2;
    string text;

    cout << "Id user1: "; cin >> id_user1;
    cout << "Id user2: "; cin >> id_user2;
    cin.ignore();
    cout << "Text: "; getline(cin, text);

    Mesaj mesaj(id_user1, id_user2, text);
    retea.addMesaj(mesaj);
}

void Meniu::getMesaje() {
    int id_user;
    cout << "Id user: "; cin >> id_user;

    vector<Mesaj> mesaje = retea.getMesaje(id_user);
    for (Mesaj mesaj : mesaje) {
        cout << mesaj.getId_user_destinatar() << " " << mesaj.getId_user_expeditor() << " " << mesaj.getContinut() << endl;
    }
}

void Meniu::addPrietenie() {
    int id_user1, id_user2;

    cout << "Id user1: "; cin >> id_user1;
    cout << "Id user2: "; cin >> id_user2;

    retea.addPrietenie(id_user1, id_user2);
}

void Meniu::removePrietenie() {
    int id_user1, id_user2;

    cout << "Id user1: "; cin >> id_user1;
    cout << "Id user2: "; cin >> id_user2;

    retea.removePrietenie(id_user1, id_user2);
}

void Meniu::getPrieteni() {
    int id_user;
    cout << "Id user: "; cin >> id_user;

    vector<User> prieteni = retea.getPrieteni(id_user);
    for (User prieten : prieteni) {
        cout << "UserID: " << prieten.getId() << " Nume: " << prieten.getNume() << " Prenume: " << prieten.getPrenume() << endl;
    }
}

void Meniu::addEveniment() {
    int id;
    string nume, locatie;

    cout << "Id: "; cin >> id;
    cin.ignore();
    cout << "Nume: "; getline(cin, nume);
    cout << "Locatie: "; getline(cin, locatie);

    Eveniment eveniment(id, nume, locatie);
    retea.addEveniment(eveniment);
}
