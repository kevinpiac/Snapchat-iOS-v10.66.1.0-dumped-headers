//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCNetworkImageView, UILabel, UISwitch, UIView;
@protocol SCImageDownloading, SCMomentsOptInEventCollectionViewCellDelegate;

@interface SCMomentsOptInEventCollectionViewCell : UICollectionViewCell
{
    SCNetworkImageView *_imageView;
    UILabel *_titleView;
    UISwitch *_switch;
    UIView *_dividerView;
    id <SCMomentsOptInEventCollectionViewCellDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (void)_switchUpdated:(id)arg1;
@property(nonatomic) __weak id <SCMomentsOptInEventCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setModel:(id)arg1 subscribed:(_Bool)arg2;

@end

