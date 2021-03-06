/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionReusableView.h>

// Not exported
@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView
{
    double _rowHeight;
    unsigned long long _highlightedRowIndex;
}

+ (struct CGColor *)backgroundColor;
+ (id)reuseIdentifier;
+ (id)collectionViewKind;
@property(nonatomic) unsigned long long highlightedRowIndex; // @synthesize highlightedRowIndex=_highlightedRowIndex;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void)drawRect:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end

