{ Parsed from ContactsUI.framework UIApplicationShortcutIcon+Contacts.h }
{$ifdef CLASSES}

type
  ContactsUI = objccategory external (UIApplicationShortcutIcon)
    class function iconWithContact (contact: CNContact): instancetype; message 'iconWithContact:';
  end;
{$endif}

