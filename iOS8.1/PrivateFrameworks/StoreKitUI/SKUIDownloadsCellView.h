//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UISlider;

@interface SKUIDownloadsCellView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIButton *_button;
    UISlider *_progressSlider;
    NSAttributedString *_attributedTitle;
    NSString *_subtitle;
    int _buttonType;
    BOOL _isPad;
}

@property(nonatomic) BOOL isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) float progress;
@property(retain, nonatomic) UIImage *image;
- (id)init;

@end

