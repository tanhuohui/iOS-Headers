/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOServer.h"

#import "GEOResourceManifestServerProxyDelegate-Protocol.h"

@class NSMutableArray;

@interface GEOResourceManifestServer : GEOServer <GEOResourceManifestServerProxyDelegate>
{
    NSMutableArray *_regionalResourcesInProgress;
}

+ (id)identifier;
- (oneway void)serverProxyDidFinishLoadingForList:(id)arg1;
- (oneway void)serverProxyDidReceiveError:(id)arg1 forList:(id)arg2;
- (oneway void)serverProxyDidReceiveResourceNames:(id)arg1 attributions:(id)arg2 forKey:(struct _GEOTileKey)arg3 fromList:(id)arg4;
- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;
- (void)cancelRegionalResourcesLoadWithMessage:(id)arg1;
- (void)loadRegionalResourcesWithMessage:(id)arg1;
- (void)getResourceManifestWithMessage:(id)arg1;
- (void)refreshActiveTileGroupWithMessage:(id)arg1;
- (void)resetActiveTileGroupWithMessage:(id)arg1;
- (void)forceUpdateWithMessage:(id)arg1;
- (void)setActiveTileGroupIdentifierWithMessage:(id)arg1;
- (void)startServerHiDPIWithMessage:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)dealloc;
- (id)init;

@end

