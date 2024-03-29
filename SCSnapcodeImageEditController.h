//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "SCWebImageScraperClientDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, PHCachingImageManager, SCGalleryPhotoLibraryFetcher, SCImpalaBusinessProfileHandler, SCLoadingIndicatorView, SCScannableInfo, SCSnapcodeCollectionCell, SCSnapcodeMenuButton, SCUserSession, SCWebImageScraperClient, SVGDocumentView, SVGRenderer, UIButton, UICollectionView, UIImage, UIImageView, UILabel, UIView;
@protocol SCSnapcodeImageEditControllerDelegate;

@interface SCSnapcodeImageEditController : SCGenericSettingsViewController <UIImagePickerControllerDelegate, SCWebImageScraperClientDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, SCPageNameLogging>
{
    SCScannableInfo *_editingScannable;
    double snapcodeSelectionViewTopOffset;
    double _pageScrollHeight;
    double _snapcodeSize;
    _Bool _inImageEditMode;
    _Bool _imageExist;
    _Bool _savingImage;
    UIButton *_snapcodeHeaderButton;
    UIButton *_cancelButton;
    UIButton *_saveBusinessProfileButton;
    UIView *_imageEditPage;
    int _imageItemPosition;
    int maxItemsToEnableScroll;
    NSMutableArray *_imagesInScrollView;
    SCSnapcodeMenuButton *_imagePickerButton;
    SVGRenderer *_svgSnapcodeRenderer;
    NSMutableSet *_loadedImgLinks;
    NSArray *_photoAssets;
    int _selectedPhotoIndex;
    _Bool _selectedWebImage;
    _Bool _movedImage;
    _Bool _keepImageLoaderSpinnerAnimating;
    SCSnapcodeCollectionCell *_lastSelectedImageCell;
    SCSnapcodeMenuButton *_useCameraRollButton;
    SCSnapcodeMenuButton *_removeImageButton;
    SCImpalaBusinessProfileHandler *_businessProfileHandler;
    SCUserSession *_userSession;
    UIImage *_previousImage;
    NSString *_pageViewName;
    _Bool _leftSwipeEnabled;
    id <SCSnapcodeImageEditControllerDelegate> _editDelegate;
    SCGalleryPhotoLibraryFetcher *_photoLibraryFetcher;
    UIImage *_chosenImage;
    UIImageView *_chosenImageEditView;
    UICollectionView *_websiteImageCollectionView;
    UICollectionView *_photoCollectionView;
    SCWebImageScraperClient *_imageScraperClient;
    UIView *_snapcodeEditContainerView;
    UIView *_snapcodeEditImageContainerView;
    SVGDocumentView *_snapcodeEditView;
    SVGDocumentView *_snapcodeEdgeFilterEditView;
    UILabel *_editInfoLabel;
    UILabel *_photoLabel;
    UILabel *_webImageNotFoundLabel;
    UIButton *_webImageNotFoundButton;
    SCLoadingIndicatorView *_imageSaveActivity;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    SCLoadingIndicatorView *_photoLoadingIndicator;
    PHCachingImageManager *_imageManager;
}

- (void).cxx_destruct;
- (void)_addImageToScroll:(id)arg1 imageIdentifier:(id)arg2;
- (id)_attributedTitle:(id)arg1;
- (void)_createImageEditView;
- (void)_didPressUseCameraRoll;
- (void)_fetchPhoto;
- (id)_generateImage;
- (id)_greenSelected;
- (id)_imageSelectColor;
- (void)_removeGhostImage;
- (void)_saveBusinessChanges;
- (void)_saveImageToServer;
- (void)_setupInitialWebImages;
- (void)_setupPermissionButton;
- (void)_showSelectedImage;
- (void)_showWebImageNotFound:(_Bool)arg1;
- (void)_startLoaderTimeOut;
- (id)_titleColor;
- (void)_updateSnapcodeResultImage;
- (void)_updateWithPhotoAssets:(id)arg1;
- (void)_webImageFetchRetryPressed;
@property(retain, nonatomic) UIImage *chosenImage; // @synthesize chosenImage=_chosenImage;
@property(retain, nonatomic) UIImageView *chosenImageEditView; // @synthesize chosenImageEditView=_chosenImageEditView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)disableLeftSwipe;
@property(nonatomic) __weak id <SCSnapcodeImageEditControllerDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(retain, nonatomic) UILabel *editInfoLabel; // @synthesize editInfoLabel=_editInfoLabel;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getTitle;
@property(retain, nonatomic) SCLoadingIndicatorView *imageLoadingIndicator; // @synthesize imageLoadingIndicator=_imageLoadingIndicator;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
@property(retain, nonatomic) SCLoadingIndicatorView *imageSaveActivity; // @synthesize imageSaveActivity=_imageSaveActivity;
@property(retain, nonatomic) SCWebImageScraperClient *imageScraperClient; // @synthesize imageScraperClient=_imageScraperClient;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(_Bool)arg3 businessProfileHandler:(id)arg4 previousImage:(id)arg5 userSession:(id)arg6;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(_Bool)arg3 scannableInfo:(id)arg4 businessProfileHandler:(id)arg5 previousImage:(id)arg6 userSession:(id)arg7;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(_Bool)arg3 scannableInfo:(id)arg4 userSession:(id)arg5;
- (void)leftButtonPressed;
@property(nonatomic) _Bool leftSwipeEnabled; // @synthesize leftSwipeEnabled=_leftSwipeEnabled;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)pageViewName;
- (void)panGestureDetected:(id)arg1;
@property(retain, nonatomic) UICollectionView *photoCollectionView; // @synthesize photoCollectionView=_photoCollectionView;
@property(retain, nonatomic) UILabel *photoLabel; // @synthesize photoLabel=_photoLabel;
@property(retain, nonatomic) SCGalleryPhotoLibraryFetcher *photoLibraryFetcher; // @synthesize photoLibraryFetcher=_photoLibraryFetcher;
@property(retain, nonatomic) SCLoadingIndicatorView *photoLoadingIndicator; // @synthesize photoLoadingIndicator=_photoLoadingIndicator;
- (void)pinchGestureDetected:(id)arg1;
- (void)rotationGestureDetected:(id)arg1;
- (void)selectPhoto;
@property(retain, nonatomic) SVGDocumentView *snapcodeEdgeFilterEditView; // @synthesize snapcodeEdgeFilterEditView=_snapcodeEdgeFilterEditView;
@property(retain, nonatomic) UIView *snapcodeEditContainerView; // @synthesize snapcodeEditContainerView=_snapcodeEditContainerView;
@property(retain, nonatomic) UIView *snapcodeEditImageContainerView; // @synthesize snapcodeEditImageContainerView=_snapcodeEditImageContainerView;
@property(retain, nonatomic) SVGDocumentView *snapcodeEditView; // @synthesize snapcodeEditView=_snapcodeEditView;
@property(retain, nonatomic) UIButton *webImageNotFoundButton; // @synthesize webImageNotFoundButton=_webImageNotFoundButton;
@property(retain, nonatomic) UILabel *webImageNotFoundLabel; // @synthesize webImageNotFoundLabel=_webImageNotFoundLabel;
@property(retain, nonatomic) UICollectionView *websiteImageCollectionView; // @synthesize websiteImageCollectionView=_websiteImageCollectionView;
- (void)setupImageScraperClient:(id)arg1;
- (void)setupPhotoLibraryImageManager:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)showAlert:(id)arg1 title:(id)arg2;
- (void)showPhotoAccessDeniedAlert;
- (void)snapcodeHeaderButtonCancelPressed;
- (void)snapcodeHeaderButtonSaveImagePressed;
- (void)tapGestureDetected:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webImageScraperClient:(id)arg1 receivedTitle:(id)arg2 forPageUrl:(id)arg3;
- (void)webImageScraperClientDidNotReceiveImageLinks:(id)arg1;
- (void)webImageScraperClientDidReceive:(id)arg1 image:(id)arg2 imageIdentifier:(id)arg3 pageIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

