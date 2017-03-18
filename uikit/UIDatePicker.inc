{ Parsed from UIKit.framework UIDatePicker.h }

{$ifdef TYPES}
type
  UIDatePickerPtr = ^UIDatePicker;
{$endif}

{$ifdef TYPES}
type
  UIDatePickerMode = NSInteger;
  UIDatePickerModePtr = ^UIDatePickerMode;

const
  UIDatePickerModeTime = 0;
  UIDatePickerModeDate = 1;
  UIDatePickerModeDateAndTime = 2;
  UIDatePickerModeCountDownTimer = 3;
{$endif}

{$ifdef CLASSES}

type
  UIDatePicker = objcclass external (UIControl, NSCodingProtocol)
  public
    procedure setDatePickerMode(newValue: UIDatePickerMode); message 'setDatePickerMode:';
    function datePickerMode: UIDatePickerMode; message 'datePickerMode';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setCalendar(newValue: NSCalendar); message 'setCalendar:';
    function calendar: NSCalendar; message 'calendar';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setDate(newValue: NSDate); message 'setDate:';
    function date: NSDate; message 'date';
    procedure setMinimumDate(newValue: NSDate); message 'setMinimumDate:';
    function minimumDate: NSDate; message 'minimumDate';
    procedure setMaximumDate(newValue: NSDate); message 'setMaximumDate:';
    function maximumDate: NSDate; message 'maximumDate';
    procedure setCountDownDuration(newValue: NSTimeInterval); message 'setCountDownDuration:';
    function countDownDuration: NSTimeInterval; message 'countDownDuration';
    procedure setMinuteInterval(newValue: NSInteger); message 'setMinuteInterval:';
    function minuteInterval: NSInteger; message 'minuteInterval';
    procedure setDate_animated (date_: NSDate; animated: boolean); message 'setDate:animated:';
  end;
{$endif}

