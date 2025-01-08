/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conectatron.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-01 17:24:47 by user              #+#    #+#             */
/*   Updated: 2025-01-01 17:24:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
#define MYLIB_H

// Incluye todas las cabeceras necesarias
#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>

// Prototipos de las funciones de la biblioteca
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char *ft_strdup(const char *s);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_atoi(const char *str);
int ft_isspace(char c);
void ft_putstr(char *str);
void *ft_memset(void s[.n], int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memset(void s[.n], int c, size_t n);
void ft_bzero(void s[.n], size_t n);
void *ft_memcpy(void dest[.n], const void src[.n], size_t n);
void *ft_memmove(void dest[.n], const void src[.n], size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strnstr(const char *big, const char *little, size_t len);
void *ft_memchr(const void *b, int c, size_t len);
int ft_memcmp(const void *b1, const void *b2, size_t len);
void *ft_calloc(size_t number, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
#endif // MYLIB_H