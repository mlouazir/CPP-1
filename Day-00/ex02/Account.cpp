/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:10:37 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/08 18:17:17 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Account::Account(int initial_deposit)
{
    if (initial_deposit < 0)
    {
        std::cout << "refused\n";
        return;
    }
    Account::_accountIndex = 1;
}

Account::~Account()
{
}
