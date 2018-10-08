<?php 

	include_once COMMON.'class.common.inc';
    include_once COMMON.'class.common.calendar.inc';
    include_once 'blade/view.addevent.blade.inc';
	
	/*echo "This Page is For Adding Event"."<br><br>";*/
?>

<div class="panel panel-default">

    <div class="panel-heading" align="center"><b>Add Event</b></div>
    
    <div class="panel-body">

	<div id="form">
		<form method="post" class="form-horizontal">

			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtUniversityID">Event Title:</label>
              	<div class="col-sm-6">
              	<input type="text" name="eventName" class="form-control" placeholder="New Event" required/>
			  	</div>
			</div>
	
			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtFirstName">Event Date:</label>
              	<div class="col-sm-6">  		
				<input type="date" name="eventDate" class="form-control" required/>
				</div>
			</div>

			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtFirstName">Start Time:</label>
              	<div class="col-sm-6">  		
				<input type="time" name="eventStartTime" class="form-control" required/>
				</div>
			</div>

			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtFirstName">End Time:</label>
              	<div class="col-sm-6">  		
				<input type="time" name="eventEndTime" class="form-control" required/>
				</div>
			</div>
			
			<div class="form-group">
              	<label class="control-label col-sm-4" for="selectDiscipline">Discipline:</label>
              	<div class="col-sm-6">	
						<select name="selectDiscipline" class="form-control" required>
							<option selected >Select Discipline</option>
							<option value="0">Everyone</option>
							<option value="1">Architecture</option>
							<option value="2">CSE</option>
							<option value="3">BBA</option>
							<option value="4">URP</option>

						</select>
				</div>
			</div>

	        <div class="form-group">        
            	<div class="col-sm-offset-2 col-sm-10">
					<button type="submit" value="request" name="request">Create Event</button>
			    </div>
            </div> 
		</form>

	</div>
	

</div>

</div>
