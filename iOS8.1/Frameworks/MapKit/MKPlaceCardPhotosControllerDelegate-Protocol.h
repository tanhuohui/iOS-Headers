//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKPlacePhotosViewController, NSString;

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional
- (BOOL)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2;
@end

