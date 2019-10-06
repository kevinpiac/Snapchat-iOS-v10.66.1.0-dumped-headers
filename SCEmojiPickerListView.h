//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface SCEmojiPickerListView : UIView
{
    UIView *_emojiViewsContainer;
    NSMutableArray *_emojiArray;
    NSMutableArray *_additionalEmojiArray;
    NSMutableArray *_emojiLabelViews;
    struct CGSize _previousBoundsSize;
    long long _defaultEmojiCount;
    _Bool _expanded;
    NSString *_additionalEmojiSelected;
}

- (void).cxx_destruct;
- (void)_addEmojiView:(id)arg1 count:(long long)arg2;
- (double)_getEmojiCenterOffset:(long long)arg1;
- (void)_refreshAdditionalEmojiViews;
- (id)emojiForLocation:(struct CGPoint)arg1;
- (struct CGPoint)emojiViewCenterForLocation:(struct CGPoint)arg1;
- (double)estimateContentHeightWithExpand:(_Bool)arg1;
- (id)initWithEmojiList:(id)arg1 emojiExtendList:(id)arg2;
- (_Bool)isEmojiInAdditionalMenu:(id)arg1;
- (void)layoutSubviews;
- (struct CGPoint)locationForEmoji:(id)arg1;
- (struct CGPoint)locationForEmojiIndex:(long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)selectedAdditionalEmoji:(id)arg1;
- (void)setExpanded:(_Bool)arg1;

@end
