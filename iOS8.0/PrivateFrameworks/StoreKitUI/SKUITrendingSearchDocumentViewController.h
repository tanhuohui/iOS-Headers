//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIDocumentViewController.h"

@class NSString, SKUITrendingSearchTemplateElement, SKUITrendingSearchView;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)_resultsViewContentInset;
- (void)_reloadResultsView;
- (void)_resultButtonAction:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
