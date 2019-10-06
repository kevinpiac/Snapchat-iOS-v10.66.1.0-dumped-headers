//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SCSearchCardContainerContentViewControllerContextDelegate;

@interface SCSearchCardContainerContentViewControllerContext : NSObject
{
    _Bool _loadingContent;
    NSArray *_tabBarItems;
    unsigned long long _selectedTabIndex;
    id <SCSearchCardContainerContentViewControllerContextDelegate> _delegate;
    struct UIEdgeInsets _layoutInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCSearchCardContainerContentViewControllerContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
- (void)selectTabIndexIfPossible:(unsigned long long)arg1;
- (void)selectTabIndexIfPossible:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void)setTabBarItems:(id)arg1 startingIndex:(unsigned long long)arg2;

@end

