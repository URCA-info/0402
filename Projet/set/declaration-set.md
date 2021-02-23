# Déclaration pour projet **set**

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
|set()||
|set( const Compare& comp )||
|template< class InputIt > set( InputIt first, InputIt last, const Compare& comp = Compare())||
|set( const set& other )||
|set( set&& other )||
|set( std::initializer_list<Key> init, const Compare& comp = Compare())||
|~set()||

| assignation | Déclaration
| ---|---
|set& operator=( const set& other )||
|set& operator=( set&& other )||
|set& operator=( std::initializer_list<Key> ilist )||

| accès aux éléments | Déclaration
| ---|---
| iterator find( const Key& value ) ||
| std::pair<iterator,iterator> equal_range( const Key& value ) const ||
| iterator lower_bound( const Key& value ) const ||
| iterator upper_bound( const Key& value ) const ||

| ajout/suppression d'éléments | Déclaration
| ---|---
| std::pair<iterator,bool> insert( const Key& value ) ||
| std::pair<iterator,bool> insert( Key&& value ) ||
| template< class InputIt > void insert( InputIt first, InputIt last ) ||
| void insert( std::initializer_list<Key> ilist ) ||
| template< class... Args > std::pair<iterator,bool> emplace( Args&&... args ) ||
| iterator erase( const_iterator pos ) ||
| void erase( const_iterator first, const_iterator last ) ||
| size_t erase( const Key& value ) ||

| modification | Déclaration
| ---|---
| void clear() ||
| void swap( set& other ) ||
| swap (version externe) ||

| tests | Déclaration
| ---|---
| bool operator== ||
| bool operator!= ||
| bool operator< ||
| bool operator<= ||
| bool operator> ||
| bool operator>= ||
| bool empty() const { return true; } ||
| bool contains( const Key& value ) const ||
| size_t size() const ||
| size_t count( const Key& value ) const ||

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
