//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface SCFriendmojiTableCellView : UITableViewCell
{
    NSString *_friendmojiSymbol;
    UILabel *_emoji;
    UILabel *_emojiTitle;
    UILabel *_emojiDesc;
    UIView *_bottomBorder;
}

+ (id)formatedLabel:(id)arg1 fontSize:(double)arg2;
+ (id)formatedLabel:(id)arg1 fontSize:(double)arg2 color:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UILabel *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) UILabel *emojiDesc; // @synthesize emojiDesc=_emojiDesc;
@property(retain, nonatomic) UILabel *emojiTitle; // @synthesize emojiTitle=_emojiTitle;
@property(retain, nonatomic) NSString *friendmojiSymbol; // @synthesize friendmojiSymbol=_friendmojiSymbol;
- (id)getEmoji;
- (void)initBottomBorder;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)updateEmojiDesc:(id)arg1;
- (void)updateEmojiTitle:(id)arg1;
- (void)updateEmojiWithSymbol:(id)arg1 emojiInfo:(id)arg2;

@end

