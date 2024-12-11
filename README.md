![ft_printf](ft_printf.png)
# ft_printf

## Introduction

Bienvenue dans le projet **ft_printf** de l'école 42. Ce projet consiste à recréer la fonction `printf` de la bibliothèque standard C, en mettant l'accent sur la gestion des arguments variadiques et la manipulation des spécificateurs de format.

## Fonctionnalités

- Gestion des spécificateurs de format (par exemple, `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`)
- Gestion de la largeur et de la précision
- Affichage de caractères, de chaînes de caractères, d'entiers, de nombres non signés, et de pointeurs

## Installation

Pour cloner et compiler ce projet, utilisez les commandes suivantes :

1. Clonez le repository :

	```bash
	git clone https://github.com/Herimamy12/ft_printf.git

2. Accedez au dossier et compilez la librairie en utilisant le Makefile inclus :

	```bash
	cd ft_printf
	make

## Utilisation

Pour utiliser la fonction `ft_printf`, suivez les étapes ci-dessous :

1. **Incluez le fichier d'en-tête dans votre code :**
    ```c
    #include "ft_printf.h"
    ```

2. **Appelez la fonction `ft_printf` comme vous le feriez avec `printf` :**
    ```c
    int main()
    {
        ft_printf("Hello world!\n");
        ft_printf("Nombre : %d\n", 42);
        ft_printf("Hexadécimal : %x\n", 255);
        return 0;
    }
    ```

3. **Compilez votre programme avec la librairie `ft_printf` :**
    ```bash
    gcc -Wall -Wextra -Werror libftprintf.a votre_code.c -o votre_programme
    ```

4. **Exécutez votre programme :**
    ```bash
    ./votre_programme
    ```

Cela vous permettra d'utiliser votre version et de personnalisée de `printf` dans vos projets.

## Auteurs

- [Herimamy12](https://github.com/Herimamy12)

## Licence

Ce projet est sous licence de l'ecole 42 Antananarivo. Pour plus d'informations, veuillez consulter le fichier [LICENSE](https://42antananarivo.mg/mentions-legales/).

## Remerciements

Merci à l'école 42 pour cette incroyable opportunité d'apprentissage et pour le soutien de la communauté. Un grand merci également à tous ceux qui ont contribué directement ou indirectement à ce projet.
