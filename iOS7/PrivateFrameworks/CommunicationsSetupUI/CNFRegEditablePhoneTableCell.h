/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell
{
    SEL _countryCodeSelector;
    NSString *_previousValue;
}

- (CDStruct_421913e2)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (id)countryCode;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
