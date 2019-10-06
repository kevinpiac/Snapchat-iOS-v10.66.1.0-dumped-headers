//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SCOperaWebAppChatPreviewViewModel : NSObject
{
    NSString *_senderNameToDisplay;
    NSString *_text;
    UIColor *_senderColor;
    NSString *_username;
    double _chevronCenterX;
}

+ (id)senderNameFont;
+ (id)textFont;
+ (struct CGSize)textSizeWithText:(id)arg1 font:(id)arg2 constrainWidth:(double)arg3;
+ (double)wrappedWidthWithTextWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double chevronCenterX; // @synthesize chevronCenterX=_chevronCenterX;
- (id)initWithSenderNameToDisplay:(id)arg1 color:(id)arg2 text:(id)arg3 username:(id)arg4 chevronCenterX:(double)arg5;
- (struct CGSize)nameSizeFitsWidth:(double)arg1;
- (double)originXFitsWidth:(double)arg1;
@property(readonly, copy, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
@property(readonly, copy, nonatomic) NSString *senderNameToDisplay; // @synthesize senderNameToDisplay=_senderNameToDisplay;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (struct CGSize)textSizeFitsWidth:(double)arg1;
- (double)textWidthFitsWidth:(double)arg1;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
