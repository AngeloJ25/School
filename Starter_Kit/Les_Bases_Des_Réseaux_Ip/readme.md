---

# LES BASES DES RÉSEAUX IP

## 1-Le modèle OSI

![image](https://user-images.githubusercontent.com/112655992/190236228-6f859922-e050-4eba-9562-11c9465e2cf6.png)

Le modèle OSI ( Open System Interconnexion ) est un modèle qui permet de comprendre les intéractions entre les protocoles.

Couche 1 : La Couche Physique = La couche physique se base principalement sur le câblage par exemple, un câble RJ45, coaxial, wi-fi.

Couche 2 : La Couche Liaison = La couche liaison se base sur la communication entre les appareils par exemple, protocole ethernet.

Couche 3 : La Couche Réseau = La couche réseau se base sur Internet par exemple, les adresses IP.

Couche 4 : La Couche Transport = La couche transport se base sur la gestion des erreurs des flux réseau par exemple, UDP TCP.

Couche 5 : La Couche Session = La couche session se base sur la synchronisation des communications par exemple, de multiples sessions.

Couche 6 : La Couche Présentation = La couche présentation se base sur l'encryption et http.

Couche 7 : La Couche Application = La couche application se base sur les logiciels par exemple, Chrome, Internet.



## 2-Citez le nom de l'autre modèle couramment utilisé et joindre une photo

*Il y'a le modèle TCP IP est aussi utilisé.*

![image](https://user-images.githubusercontent.com/112655992/191081485-d5193c4b-8a3a-4bcf-828f-4f4e0b67ccf9.png)

## 3-Qu'est ce qu'un LAN ? Citez des exemples de LAN

Le LAN (Local Area Network) est un réseau informatique physique ou virtuel.

Un exemple de LAN = Un réseau domestiques ou un petit réseau d'entreprises.

## 4-Dans la vidéo, on mentione l'adresse MAC. Expliquez en détail son utilité. Cette adresse est codée sur 48 bits en Hexadécimal. Après quelques recherches, expliquez ce qu'est un bit, un octet.

L'adresse MAC ( Media Acess Control) est l'adresse physique d'un périphérique réseau. 

Un bit et une unité d'information informatique pouvant prendre la valeur 0 ou la valeur 1.

Un octet est un groupe composé de huit positions binaires.


## 5-Egalement, on parle d'hexadécimal. Après recherches, donnez l'équivalent hexadécimal du nombre décimal 58, 40, 3, et 146. Vous pouvez vous aider d'un convertisseur en ligne. Vous apprendrez dans une prochaine activité comment passer de la notation décimal à hexadécimal ou binaire.

| Décimal | Hexadécimal |
| --- | --- |
| 58 | 3A |
| 40 | 28 | 
| 3 | 3 |
| 146 | 92 |

## 6-Donner la définition d'un réseau WAN.

Un réseau WAN ( Wide Area Networ ) est un réseau informatique qui s'étend dans le monde entier, il permet la transmission de donnée à longue distance.



## 7-L'adresse IP la plus couramment utilisée pour nos box internet à la maison est : 192.168.1.1. Donner l'écriture binaire de cette adresse IP (vous pouvez vous aider d'un convertisseur en ligne).

192.168.1.1 = 11000000.10101000.00000001.00000001

## 8-Donnez deux exemples d'adresses IPv4 privéés de classe C. Les périphériques porteurs de ces adresses peuvent ils cohabiter sur le même réseau ?

192.168.2.2 / 192.168.25.4

Oui les périphériques porteurs de ces adresses peuvent cohabiter sur le même réseau car il y'a une adresse publique différente.


## 9-Renseignez vous sur la notation CIDR. Comment écrit on le masque 255.255.255.0 en notation CIDR ?

La notation CIDR ( Classess Inter-Domain Routing ) donne un numéro du réseau suivi par un slash et le nombre de bits à 1 dans la ntation binaire du masque sous-réseau.

255.255.255.0 = /24 car binaire = 1111 1111 . 1111 1111 . 1111 1111 . 0000 0000 = 24 bits a 1.

## 10-Rappeler ce que signifie DNS et son utilité

Le DNS ( Domain Name System ) est un service informatique distribé utilisé qui traduit les noms de domaines Internet en adresse IP.

## 11-Rappeler ce que signifie DHCP et son utilité

Le DHCP ( Dynamic Host Configuration Protocol ) est un protocole réseau utilisé sur les réseaux IP.

Au lieu de demander aux administrateurs réseau d'attribuer manuellement les adresses IP à tous les périphériques réseau.


## 12-Dans la vidéo, un test est effectué en ligne de commande ("ipconfig") pour voir la configuration IP de l'ordinateur. Exécutez cette commande sur votre PC et joignez une capture d'écran.

![image](https://user-images.githubusercontent.com/112655992/191224343-6df96eb9-1ebc-48bd-96da-78e2fe806d43.png)

## 13-Quelle adresse IP nous indique un problème de configuration IP ?

169.254.X.X

## 14-Rappelez le port par défaut pour le protocole HTTP, HTTPS, FTP, SSH, Telnet, POP et SMTP. Pour chacun d'entre eux, expliquer brièvement leur utilité.

Le protocole HTTP est dans le port 80, il permet l'identification du visiteur par transmission d'un nom et d'un mot de passe.

Le protocole HTTPS est dans le port 443, il sécurise tous les sites du visiteur accessible par le même mot de passe.

Le protocole FTP est dans le port 21, il est destiné au partage de fichier sur un réseau TCP/IP.

Le protocole SSH est dans le port 22, il étabit une connexion sécurisée entre deux hotes distants sur internet au sein d'un réseau.

Le protocole Telnet est dans le port TCP 23, permet de communiquer avec un serveur distant en échangeant des lignes de texte et en recevant des réponses également sous forme de texte.

Le protocole POP est dans le port 110, s'occupe de la messagerie du visiteur.

Le protocole SMTP est dans le port 25, permet de transférer le courrier électronique vers les messagerie électronique.


## 15-Listez les différents outils de dépanage cités dans la vidéo. Pour chacun d'entre eux, essayer la commande dans votre invite de commande Windows et joindre une capture d'écran du résultat. (Pour le ping, faites un ping de google.fr, idem pour tracert).

- Ping = 

![image](https://user-images.githubusercontent.com/112655992/191227849-3a4e1b63-1871-4641-b935-94c135b69ad8.png)

- Ping google.fr =

![image](https://user-images.githubusercontent.com/112655992/191228235-683c181a-5b33-4490-abce-bf4a8e491a2d.png)

- ipconfig = 

![image](https://user-images.githubusercontent.com/112655992/191227999-6b810168-944e-42a7-9fdf-d48b0bfb9728.png)

- Tracert = 

![image](https://user-images.githubusercontent.com/112655992/191228365-92635068-4219-40ec-a5bd-6ab1b1782608.png)

## 16-Pour chacune des commandes réseau Windows listées ci-dessus, donnez l'équivalent pour Linux.

- Ping = 

![image](https://user-images.githubusercontent.com/112655992/191430132-67f1d1fd-a9d5-4093-9c7a-718c25379d38.png)

- Ping google.com ne fonctionne pas

- ipconfig ne fonctionne pas

- Tracert ne fonctionne pas 

## 17-Prendre une capture d'écran de la fin de la vidéo résumant les différentes couches avec les exemples.

![image](https://user-images.githubusercontent.com/112655992/191227260-bda33e76-98e3-4b44-b168-3b89da1972b6.png)




### angelo.jardot









