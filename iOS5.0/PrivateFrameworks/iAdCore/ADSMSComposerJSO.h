/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADJavaScriptObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WebScriptObject;

@interface ADSMSComposerJSO : ADJavaScriptObject <MFMessageComposeViewControllerDelegate>
{
    id <ADJSODelegate> _delegate;
    NSArray *_messageRecipients;
    NSString *_messageBody;
    WebScriptObject *_listener;
}

+ (void)initializeInContext:(struct OpaqueJSContext *)arg1;
+ (id)scriptSelectors;
+ (id)scriptingKeys;
@property(retain, nonatomic) WebScriptObject *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSArray *messageRecipients; // @synthesize messageRecipients=_messageRecipients;
@property(nonatomic) id <ADJSODelegate> delegate; // @synthesize delegate=_delegate;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)send;
- (void)setBody:(id)arg1;
- (id)body;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (id)init;
- (void)dealloc;

@end

