# Déclaration pour le projet **list**

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

| constructeur/destructeur | Déclaration |
| ---|---|
| list() ||
| list(size_t count) ||
| list(size_t count, const T& value ) ||
| template<typename InputIt > list( InputIt first, InputIt last) ||
| list( const list& other ) ||
| list( list&& other ) ||
| list( std::initializer_list<T> init ) ||
| ~list() ||

| assignation | Déclaration
| ---|---
| list& operator=( const list& other ) ||
| list& operator=( list&& other ) ||
| void assign( size_t count, const T& value ) ||
| template<typename InputIt > void assign( InputIt first, InputIt last ) ||

| accès aux éléments | Déclaration
| ---|---
| T& front() ||
| T& back() ||
| const T& back() const ||
| const T& front() const ||

| ajout/suppression d'éléments | Déclaration
| ---|---
| void push_back( const T& value ) ||
| void push_front( const T& value ) ||
| void push_back( T&& value ) ||
| void push_front( T&& value ) ||
| template< class... Args > void emplace_back( Args&&... args ) ||
| template< class... Args > void emplace_front( Args&&... args ) ||
| void pop_back() ||
| void pop_front() ||
| iterator insert( const_iterator pos, const T& value ) ||
| iterator insert( const_iterator pos, T&& value ) ||
| iterator insert( const_iterator pos, size_t count, const T& value ) ||
| template< class InputIt > iterator insert( const_iterator pos, InputIt first, InputIt last ) ||
| iterator insert( const_iterator pos, std::initializer_list<T> ilist ) ||
| template< class... Args > iterator emplace( const_iterator pos, Args&&... args ) ||
| iterator erase( const_iterator pos ) ||
| iterator erase( const_iterator first, const_iterator last ) ||

| modification | Déclaration
| ---|---
| void resize( size_t count ) ||
| void resize( size_t count, const T& value) ||
| void merge( list& other ) ||
| void merge( list&& other ) ||
| void splice(const_iterator pos, list& other) ||
| void splice(const_iterator pos, list&& other) ||
| void reverse() ||
| void remove( const T& value ) ||
| void clear() ||
| void swap( list& other ) ||
| swap (externe) ||

| tests | Déclaration
| ---|---
| operator== ||
| operator!= ||
| operator< ||
| operator<= ||
| operator> ||
| operator>= ||
| bool empty() const ||
| size_t size() const ||

| itérateurs | Déclaration |
| ---|---
| bidirectionnel | |
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
