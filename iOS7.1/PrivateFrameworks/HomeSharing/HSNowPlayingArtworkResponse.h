//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse
{
    NSData *_artworkData;
    NSString *_artworkMIMEType;
}

@property(retain, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
- (void)dealloc;

@end

