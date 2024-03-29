//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MASConstraint, UIImageView, UILabel, UIView;

@interface SelectContactCell : UITableViewCell
{
    UIView *_bottomBorder;
    UIView *_friendMojiContainerViewSubview;
    UIView *_labelContainer;
    UIView *_friendMojiView;
    _Bool _isSearching;
    _Bool _isFastStoryPost;
    _Bool _selectionAllowed;
    UIImageView *_circle;
    MASConstraint *_circleRightConstraint;
    unsigned long long _circleType;
    UILabel *_nameLabel;
    UILabel *_subNameLabel;
    UIView *_friendMojiContainerView;
}

- (void).cxx_destruct;
- (struct CGSize)_getLabelSize:(id)arg1 width:(double)arg2;
- (void)addFriendMojiView:(id)arg1;
@property(retain, nonatomic) UIImageView *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) MASConstraint *circleRightConstraint; // @synthesize circleRightConstraint=_circleRightConstraint;
@property(nonatomic) unsigned long long circleType; // @synthesize circleType=_circleType;
- (id)detailTextLabel;
@property(retain, nonatomic) UIView *friendMojiContainerView; // @synthesize friendMojiContainerView=_friendMojiContainerView;
- (void)hideCircleViewAndUpdateEmojiView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)prepareForReuse;
@property(nonatomic) _Bool selectionAllowed; // @synthesize selectionAllowed=_selectionAllowed;
- (void)setBackgroundSelected:(_Bool)arg1;
- (void)setCellSelected:(_Bool)arg1;
- (void)setCellSelected:(_Bool)arg1 shouldSetFondSelected:(_Bool)arg2;
- (void)setCircleSelected:(_Bool)arg1;
- (void)setFontSelected:(_Bool)arg1;
- (void)setSelectedBackground;
@property(retain, nonatomic) UILabel *subNameLabel; // @synthesize subNameLabel=_subNameLabel;
- (void)setUnselectedBackground;
- (void)showSeparator:(_Bool)arg1;
- (id)textLabel;
- (void)toggleRightOffsetIsSearching:(_Bool)arg1 isFastStoryPost:(_Bool)arg2;

@end

