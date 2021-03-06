/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UITextInput_Internal-Protocol.h"

@class NSString, NSUndoManager, UIResponder<UITextInput>, UIView, UIView<UITextInputPrivate>;

@interface UIResponder : NSObject <UITextInput_Internal>
{
}

+ (void)_finishStateRestoration;
+ (void)_cleanupAllStateRestorationTables;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)_stopTrackingObjectsWithIdentifiers;
+ (void)_startTrackingObjectsWithIdentifiers;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;
@property(readonly, nonatomic) NSUndoManager *undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)firstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_finishResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)_containsResponder:(id)arg1;
- (id)_window;
- (BOOL)_containedInAbsoluteResponderChain;
@property(readonly, nonatomic) UIResponder *_responderForEditing;
@property(readonly, nonatomic) UIResponder *_editingDelegate;
- (BOOL)_isRootForKeyResponderCycle;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (id)nextResponder;
- (void)gestureChanged:(struct __GSEvent *)arg1;
- (void)gestureEnded:(struct __GSEvent *)arg1;
- (void)gestureStarted:(struct __GSEvent *)arg1;
- (void)scrollWheel:(struct __GSEvent *)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)mouseMoved:(struct __GSEvent *)arg1;
- (void)mouseExited:(struct __GSEvent *)arg1;
- (void)mouseEntered:(struct __GSEvent *)arg1;
- (void)mouseDragged:(struct __GSEvent *)arg1;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;
- (void)reloadInputViewsWithoutReset;
- (void)reloadInputViews;
@property(readonly) UIView *inputAccessoryView;
@property(readonly) UIView *inputView;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (id)_nextViewControllerInResponderChain;
- (BOOL)_isViewController;
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned int)arg4;
- (BOOL)_promoteDeepestDefaultFirstResponder;
- (id)_deepestDefaultFirstResponderMatching:(id)arg1;
- (id)_deepestDefaultFirstResponder;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (id)_nextFirstResponderIfAllowed;
- (id)nextFirstResponder;
- (id)defaultFirstResponder;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (BOOL)_isPinningInputViews;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (void)_becomeFirstResponderAndMakeVisible;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (id)_keyboardResponder;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseDragged:(struct __GSEvent *)arg1;
- (void)_controlMouseUp:(struct __GSEvent *)arg1;
- (void)_controlMouseDown:(struct __GSEvent *)arg1;
- (BOOL)_canBecomeFirstResponderWhenPossible;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_responderForBecomeFirstResponder;
- (id)_firstResponder;
- (void)_setFirstResponder:(id)arg1;
- (id)_selectableText;
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (int)selectionAffinity;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_unmarkText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setGestureRecognizers;
- (int)_selectionAffinity;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_fontForCaretSelection;
- (id)_textColorForCaretSelection;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (BOOL)_isEmptySelection;
- (struct CGRect)_selectionClipRect;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (id)_fullText;
- (id)_wordContainingCaretSelection;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterBeforeCaretSelection;
- (unsigned long)_characterAfterCaretSelection;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (int)_indexForTextPosition:(id)arg1;
- (struct _NSRange)_selectionAsNSRange;
- (id)_keyInput;
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
- (void)endSelectionChange;
- (void)beginSelectionChange;
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (id)_asTextSelection;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
- (id)interactionAssistant;
- (id)textInputView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_restorationIdentifierPath;
@property(copy, nonatomic) NSString *restorationIdentifier;
- (void)_trackObjectWithIdentifier:(id)arg1;

@end

