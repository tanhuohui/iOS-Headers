//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class PUAbstractNavigationBanner, _UINavigationControllerPalette;

@interface PUNavigationController : UINavigationController
{
    BOOL _pu_preventsAutorotation;
    CDUnknownBlockType _ppt_onDidShowViewControllerBlock;
    PUAbstractNavigationBanner *__banner;
    _UINavigationControllerPalette *__palette;
    unsigned int _pu_supportedInterfaceOrientations;
}

@property(nonatomic) BOOL pu_preventsAutorotation; // @synthesize pu_preventsAutorotation=_pu_preventsAutorotation;
@property(nonatomic) unsigned int pu_supportedInterfaceOrientations; // @synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations;
@property(retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // @synthesize _palette=__palette;
@property(retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // @synthesize _banner=__banner;
@property(copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) CDUnknownBlockType ppt_onDidShowViewControllerBlock; // @synthesize ppt_onDidShowViewControllerBlock=_ppt_onDidShowViewControllerBlock;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)pu_setPreventsAutorotation:(BOOL)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned int)arg1;
- (void)pu_didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pu_willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
