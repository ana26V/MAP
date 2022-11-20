1) Descriere:

Turnul din Hanoi sau Turnurile din Hanoi este un joc matematic sau puzzle. Este format din trei tije și un număr variabil de discuri, de diferite mărimi, 
care pot fi poziționate pe oricare din cele 3 tije. Jocul începe având discurile așezate în stivă pe prima tijă, în ordinea mărimii lor, astfel încât să formeze un turn.
Scopul jocului este acela de a muta întreaga stivă de pe o tijă pe alta, respectând următoarele reguli:

Doar un singur disc poate fi mutat, la un moment dat.
Fiecare mutare constă în luarea celui mai de sus disc de pe o tija și glisarea lui pe o altă tijă, chiar și deasupra altor discuri care sunt deja prezente pe acea tijă.
Un disc mai mare nu poate fi poziționat deasupra unui disc mai mic.


2) Algoritmul de rezolvare :
 
Se muta discul „N-1” de la „A” la „B”, folosind C.

Se muta ultimul disc de la „A” la „C”.

Se muta discul „N-1” de la „B” la „C”, folosind A.

-Pașii pentru a rezolva problema:

Se creaza o funcție turnurileHanoi ce ia ca parametrii N (numărul curent de discuri), tija_init, tija_finala, tija_aux.
Se apeleaza funcția pentru N – al 1-lea disc.
Se afiseaza discul curent , tija_init și tija_finala
Se apeleaza din nou functia pentru N – al 1-lea disc.



3) Exemple de rulare

![image](https://user-images.githubusercontent.com/104435037/202912116-e1d08a09-4cd8-4f77-907a-9948272adfbc.png)
![image](https://user-images.githubusercontent.com/104435037/202912142-8cb20af7-207d-4949-9231-73f1c0fad45e.png)
![image](https://user-images.githubusercontent.com/104435037/202912198-60a217cb-04e7-4001-aa83-d36982547d97.png)
![image](https://user-images.githubusercontent.com/104435037/202912213-bd84dada-a860-4d03-9bec-b4769d29927d.png)
![image](https://user-images.githubusercontent.com/104435037/202912242-75c0b767-9ab8-4bdf-b356-b537bf565d2c.png)


Mediul de dezvoltare ales este Microsoft Visual Studio(2022)

Aplicatia poate fi gasita pe docker hub:

https://hub.docker.com/repository/docker/ana26/proiect-voichescu

Se poate rula în interiorul unui container Docker folosind:

docker push ana26/proiect-voichescu:tagname

apoi:

docker run -it ana26/proiect-voichescu:tagname


4) Bibliografie:
https://recurssion.weebly.com/turnul-din-hanoi.html

https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/

https://youtu.be/q6RicK1FCUs?list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O

https://docs.docker.com/get-started/overview/

https://www.simplilearn.com/tutorials/git-tutorial
