#include "stdafx.h"

#include <Core/CoreAll.h>
#include <Fusion/FusionAll.h>

// XI_WIN is a macro added by fuction headers
#ifdef XI_WIN
  #include "CustomMfcUi.h"
#endif

using namespace adsk::core;
using namespace adsk::fusion;

Ptr<Application> app;
Ptr<UserInterface> ui;

extern "C" XI_EXPORT bool run(const char* context)
{
  app = Application::get();
  if (!app)
    return false;

  ui = app->userInterface();
  if (!ui)
    return false;

  showDialog();

  return true;
}

extern "C" XI_EXPORT bool stop(const char* context)
{
  if (ui)
  {
    ui->messageBox("in stop");
    ui = nullptr;
  }

  return true;
}