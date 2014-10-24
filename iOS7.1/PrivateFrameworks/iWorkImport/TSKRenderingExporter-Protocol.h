//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKExporter.h"

@class NSURL, TSDImager;

@protocol TSKRenderingExporter <TSKExporter>
- (BOOL)hasMoreThanOnePageToPrint;
- (BOOL)paginate;
- (void)setPaginate:(BOOL)arg1;
- (unsigned int)pageCount;
- (double)progressForCurrentPage;
- (TSDImager *)imager;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)setInfosToCurrentPage;
- (BOOL)incrementPage;
- (BOOL)preparePage:(unsigned int)arg1;
- (void)teardown;
- (void)setup;
- (BOOL)exportToURL:(NSURL *)arg1 pageNumber:(unsigned int)arg2 delegate:(id <TSKImportExportDelegate>)arg3 error:(id *)arg4;
@end
