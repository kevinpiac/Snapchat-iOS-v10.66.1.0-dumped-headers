//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIColor;

@interface SCSearchEmojiMaskView : UIImageView
{
    NSString *_emojiString;
    double _fontPointSize;
    UIColor *_borderColor;
    double _borderWidth;
    CDUnknownBlockType _renderingBlock;
}

+ (id)emojiMaskRenderPerformer;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSString *emojiString; // @synthesize emojiString=_emojiString;
@property(nonatomic) double fontPointSize; // @synthesize fontPointSize=_fontPointSize;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) CDUnknownBlockType renderingBlock; // @synthesize renderingBlock=_renderingBlock;

@end
