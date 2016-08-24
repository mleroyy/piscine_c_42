/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_ac_av.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:18:02 by videsvau          #+#    #+#             */
/*   Updated: 2016/08/14 22:18:05 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_AC_AV_H
# define ERROR_AC_AV_H
# include <unistd.h>

int		check_number_of_parameter(int argc);
int		check_length_parameter(int argc, char **argv);
int		check_character_parameter(int argc, char **argv);
int		check_if_number_17_(int argc, char	**argv);
#endif
