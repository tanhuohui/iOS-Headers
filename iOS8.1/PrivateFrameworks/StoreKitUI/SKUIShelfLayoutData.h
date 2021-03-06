//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SKUIShelfLayoutData : NSObject
{
    float _columnSpacing;
    NSMutableArray *_columnWidths;
    struct UIEdgeInsets _contentInset;
    int _numberOfRows;
    float *_rowHeights;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) float columnSpacing; // @synthesize columnSpacing=_columnSpacing;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize totalContentSize;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (float)rowHeightForIndex:(int)arg1;
- (void)reloadWithItemCount:(int)arg1 sizeBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int numberOfColumns;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (float)columnWidthForIndex:(int)arg1;
- (void)dealloc;
- (id)initWithNumberOfRows:(int)arg1 columnSpacing:(float)arg2;

@end

