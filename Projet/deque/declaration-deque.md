# Déclaration pour le projet **deque**

| Binôme | Nom1, Nom2 (à remplir)
| ---|---
| Groupe | xxxx (à remplir)

Remplir les tableaux et sections ci-dessous en fonction de ce que vous
avez réalisé.

**Attention:** toute déclaration incorrecte retire des points à votre note
finale.

## Base fonctionnelle

Déclarer ici, s'il y en a eu un, le code source utilisé pour votre structure de données interne.
Ce code devra être placés dans un répertoire spécifique nommé base.
Si ce source a été trouvé sur internet, le lien vers la page d'origine devra être donné.

## Fonctionnalités générales

Les déclarations possibles sont les suivantes:
+ *fait* = réalisé ET testé.
+ *partiel* = réalisé mais ne fonctionne pas dans certains cas identifié (à préciser).
+ *bogué* = réalisé mais fonctionne pas dans des cas non identifié.
+ *non fonctionnel* = écrit mais ne fonctionne pas.
+ déclaration vide = non réalisé.

| version réalisée | Déclaration |
| ---|---|
| int ||
| template ||

| constructeur/destructeur | Déclaration |
| ---|---|
| deque() ||
| deque( size_type count ) ||
| deque( size_type count, const T& value ) ||
| template< class InputIt > deque( InputIt first, InputIt last) ||
| deque( const deque& other ) ||
| deque( deque&& other ) ||
| deque( std::initializer_list<T> init ) ||
| ~deque() | |

| assignation | Déclaration
| ---|---
| deque& operator=( const deque& other ) ||
| deque& operator=( deque&& other ) ||
| deque& operator=( std::initializer_list<T> ilist ) ||
| void assign( size_type count, const T& value ) ||
| template< class InputIt > void assign( InputIt first, InputIt last ) ||
| void assign( std::initializer_list<T> ilist ) ||

| accès aux éléments | Déclaration
| ---|---
| T& at( size_type pos ) ||
| const T& at( size_type pos ) const ||
| T& operator\[]( size_type pos ) ||
| const T& operator\[]( size_type pos ) const ||
| T& front() ||
| const T& front() const ||
| T& back() ||
| const T& back() const ||

| ajout/suppression | Déclaration
| ---|---
| void push_back( const T& value ) ||
| void push_back( T&& value ) ||
| template< class... Args > void emplace_back( Args&&... args ) ||
| void pop_back() ||
| void push_front( const T& value ) ||
| void push_front( T&& value ) ||
| template< class... Args > void emplace_front( Args&&... args ) ||
| void pop_front() ||

| modification | Déclaration
| ---|---
| void resize( size_type count ) ||
| void resize( size_type count, const value_type& value ) ||
| void clear() ||
| void swap( deque& other ) ||
| swap (version externe) ||

| tests | Déclaration
| ---|---
| bool empty() const ||
| size_t size() const ||
| bool operator== ||
| bool operator!= ||
| bool operator<  ||
| bool operator<= ||
| bool operator>  ||
| bool operator>= ||

| itérateurs | Déclaration |
| ---|---
| bidirectionnel | |
| accès aléatoire | |
| constant | |
| inverse | |
| inverse constant | |

## Tests unitaires

Décrire ici l'ensemble des tests réalisés, et comment
les lancer à partir de votre makefile.

Rappel: au minimum, votre makefile doit tester toutes les méthodes
écrites et vérifier que leur résultat est correct.

## Remarques complémentaires

Écrire ici les remarques complémentaires (travail
  supplémentaire non décrit précédemment, etc ...).
