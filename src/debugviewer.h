// Copyright (C) 2013 July IGHOR.
// I want to create trading application that can be configured for any rule and strategy.
// If you want to help me please Donate: 1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc
// For any questions please use contact form https://sourceforge.net/projects/bitcointrader/
// Or send e-mail directly to julyighor@gmail.com
//
// You may use, distribute and copy the Qt Bitcion Trader under the terms of
// GNU General Public License version 3

#ifndef DEBUGVIEWER_H
#define DEBUGVIEWER_H

#include <QWidget>
#include <QTimer>
#include "ui_debugviewer.h"

class DebugViewer : public QWidget
{
	Q_OBJECT

public:
	DebugViewer();
	~DebugViewer();

private:
	bool savingFile;
	QTimer secondTimer;
	QByteArray buffer;
	Ui::DebugViewer ui;
private slots:
	void on_buttonSaveAs_clicked();
	void secondSlot();
	void sendLogSlot(QByteArray);
	void on_radioDebug_toggled(bool);
};

#endif // DEBUGVIEWER_H
