/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSMethodSignature : NSObject
{
    void *_private;
    void *_reserved[6];
}

+ (id)signatureWithObjCTypes:(const char *)arg1;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)methodReturnLength;
- (const char *)methodReturnType;
- (BOOL)isOneway;
- (unsigned int)frameLength;
- (const char *)getArgumentTypeAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfArguments;
- (id)_protocolsForObjectAtArgumentIndex:(int)arg1;
- (Class)_classForObjectAtArgumentIndex:(int)arg1;
- (id)_signatureForBlockAtArgumentIndex:(int)arg1;
- (id)_typeString;
- (struct NSMethodFrameArgInfo *)_argInfo:(int)arg1;
- (CDStruct_52991635 *)_frameDescriptor;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

