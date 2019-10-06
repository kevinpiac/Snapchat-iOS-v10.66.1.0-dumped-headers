//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIImageView, UILabel, UIView;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterHomeFilterOnboardingPageContentController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_heroImageView;
    UIView *subView;
    unsigned long long _pageIndex;
    NSString *_txtTitle;
    NSString *_subTitle;
    NSString *_bitmojiTemplateId;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

- (void).cxx_destruct;
@property(retain) NSString *bitmojiTemplateId; // @synthesize bitmojiTemplateId=_bitmojiTemplateId;
@property(retain, nonatomic) id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (id)initWithGeofilterSession:(id)arg1;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *txtTitle; // @synthesize txtTitle=_txtTitle;
- (void)viewDidLoad;

@end

