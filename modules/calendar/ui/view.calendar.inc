<!DOCTYPE html>


<link rel="stylesheet" href="resources\css\fullcalendar.css" />
<link rel="stylesheet" href="resources\css\bootstrap.css" />
<script src="resources\css\jquery.min.js"></script>
<script src="resources\css\jquery-ui.min.js"></script>
<script src="resources\css\moment.min.js"></script>
<script src="resources\css\fullcalendar.min.js"></script>


<script>
$(document).ready(function() {
    var calendar = $('#calendar').fullCalendar({
      editable:true,
      header:{
      left:'prev,next today',
      center:'title',
      right:'month,agendaWeek,agendaDay'
      },
      events: 'load.php',
      selectable:true,
      selectHelper:true,  
  });
});
</script>

  <div class="container">
  <div id="calendar"></div>