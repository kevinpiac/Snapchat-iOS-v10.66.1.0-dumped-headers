//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SCOperaWebAppConversationCellViewModel : NSObject
{
    NSString *_senderNameToDisplay;
    NSString *_text;
    UIColor *_senderColor;
    NSString *_userId;
}

- (void).cxx_destruct;
- (id)initWithSenderNameToDisplay:(id)arg1 color:(id)arg2 text:(id)arg3 userId:(id)arg4;
@property(readonly, copy, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
- (id)senderDisplayNameFont;
@property(readonly, copy, nonatomic) NSString *senderNameToDisplay; // @synthesize senderNameToDisplay=_senderNameToDisplay;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)textFont;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

