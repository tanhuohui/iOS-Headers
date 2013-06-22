/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PLGatekeeperClient : NSObject
{
    struct _xpc_connection_s *connection;
}

+ (id)sharedInstance;
@property(nonatomic) struct _xpc_connection_s *connection; // @synthesize connection;
- (void)cleanupForStoreDemoMode;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)clearChangeStore;
- (void)recalculateCachedAlbumCounts;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)cleanupDualCameraRollAfterTellurideCorruption;
- (unsigned int)secondsNeededToCleanupDualCameraRollAfterTellurideCorruption;
- (void)cleanupModelAfteriTunesRestore;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateStackedImageCacheForAlbum:(id)arg1;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3 assignNewIndex:(BOOL)arg4;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (void)launchAssetsd;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (void)createPhotoLibraryDatabase;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (id)messagesImageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (id)imageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (void)requestImageFromAssetURL:(id)arg1 format:(int)arg2 handler:(id)arg3;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)saveAssetWithData:(id)arg1 handler:(id)arg2 imageSurface:(void)arg3 previewImageSurface:(void *)arg4;
- (id)fileURLForAssetURL:(id)arg1;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (void)requestAccessWithHandler:(id)arg1;
- (id)init;
@property(readonly, nonatomic) struct dispatch_queue_s *replyQueue;
- (struct dispatch_queue_s *)sendQueue;

@end

