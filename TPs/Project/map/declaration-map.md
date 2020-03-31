# Déclaration pour projet **map**

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
| map() ||
| template< class InputIt > map(InputIt first, InputIt last) ||
| map( const map& other ) ||
| map( map&& other ) ||
| map( std::initializer_list<value_type> init) ||
| ~map() ||

| assignation | Déclaration
| ---|---
| map& operator=( const map& other ) ||
| map& operator=( map&& other ) ||
| map& operator=( std::initializer_list<value_type> ilist ) ||
| void clear() ||

| accès aux éléments | Déclaration
| ---|---
| mapped_type& at( const Key& key ) ||
| const mapped_type& at( const Key& key ) const ||
| mapped_type& operator\[]( const Key& key ) ||
| mapped_type& operator\[]( Key&& key ) ||
| iterator find( const Key& key ) ||
| const_iterator find( const Key& key ) const ||
| std::pair<iterator,iterator> equal_range( const Key& key ) ||
| iterator lower_bound( const Key& key ) ||
| iterator upper_bound( const Key& key ) ||

| ajout/suppression d'éléments | Déclaration
| ---|---
| std::pair<iterator,bool> insert( const value_type& value ) ||
| std::pair<iterator,bool> insert( value_type&& value ) ||
| iterator insert( iterator hint, const value_type& value ) ||
| iterator insert( iterator hint, value_type&& value ) ||
| template< class InputIt > void insert( InputIt first, InputIt last ) ||
| void insert( std::initializer_list<value_type> ilist ) ||
| void erase( iterator pos ) ||
| void erase( iterator first, iterator last ) ||
| size_t erase( const key_type& key ) ||

| modification | Déclaration
| ---|---
| void swap( map& other ) ||
| swap (version externe) ||

| tests | Déclaration
| ---|---
| operator== ||
| operator!= ||
| operator< ||
| operator<= ||
| operator> ||
| operator>= ||
| bool empty() const ||
| bool contains( const Key& key ) const ||
| size_t size() const ||
| size_t count( const Key& key ) const ||

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
