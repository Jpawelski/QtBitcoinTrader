// Copyright (C) 2013 July IGHOR.
// I want to create trading application that can be configured for any rule and strategy.
// If you want to help me please Donate: 1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc
// For any questions please use contact form https://sourceforge.net/projects/bitcointrader/
// Or send e-mail directly to julyighor@gmail.com
//
// You may use, distribute and copy the Qt Bitcion Trader under the terms of
// GNU General Public License version 3

#ifndef ADDRULEWINDOW_H
#define ADDRULEWINDOW_H

#include <QDialog>
#include "ui_addrulewindow.h"
#include "ruleholder.h"
#include "rulewidget.h"

class AddRuleWindow : public QDialog
{
	Q_OBJECT

public:
	Ui::AddRuleWindow ui;
	AddRuleWindow(RuleWidget *parent = 0);
	~AddRuleWindow();
	RuleHolder getRuleHolder();
	void fillByRuleHolder(RuleHolder *holder);
private:
	RuleWidget *parentRuleGroup;
	int thanType();
	bool checkIsValidRule();
public slots:
	void languageChanged();
public slots:
	void on_fillFromBuyPanel_clicked();
	void on_fillFromSellPanel_clicked();

	void ifChanged(bool);
	void setOrdersBackInvisible(bool);
	void amountChanged();
	void buttonAddRule();
	void checkToEnableButtons();
};

#endif // ADDRULEWINDOW_H
