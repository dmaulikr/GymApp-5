//
//  SeriesAndLoopsViewController.h
//  GymApp
//
//  Created by Felipe Correa on 21/07/15.
//  Copyright (c) 2015 Reyes Magos. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SeriesAndLoopsViewControllerDelegate <NSObject>

-(void) SeriesAndLoopsViewControllerDidSelectedExercise: (NSString*) exerciseName withSeries:(NSInteger) noSeries withReps:(NSInteger) noReps;

@end

@interface SeriesAndLoopsViewController : UIViewController

@property (nonatomic, weak) id <SeriesAndLoopsViewControllerDelegate> delegate;

@property (nonatomic, strong) NSString* exerciseName;

- (IBAction)seriesSTP:(UIStepper *)sender;

- (IBAction)repsSTP:(UIStepper *)sender;

- (IBAction)cancelBtn:(id)sender;
- (IBAction)doneBtn:(id)sender;

@end
