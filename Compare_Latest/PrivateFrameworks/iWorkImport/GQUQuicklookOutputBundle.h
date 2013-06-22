/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQUOutputBundle-Protocol.h"

@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary *mQuicklookProperties;
    struct __CFDictionary *mAttachments;
    struct __CFData *mMainHtmlData;
    struct __CFString *mUriScheme;
    struct __CFString *mUuidStr;
}

- (id)init;
- (id)initWithUriScheme:(struct __CFString *)arg1;
- (void)dealloc;
- (struct __CFData *)mainHtmlData;
- (struct __CFDictionary *)quicklookDictionary;
- (BOOL)giveOutputToPreviewRequest:(struct __QLPreviewRequest *)arg1;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (BOOL)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (BOOL)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (void)setDocumentSize:(struct CGSize)arg1;
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(BOOL)arg2;

@end

